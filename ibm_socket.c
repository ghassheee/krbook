
#include <manifest.h>
#include <bsdtypes.h>
#include <socket.h>
#include <in.h>
#include <netdb.h>
#include <stdio.h>


main(argc, argv)
int argc;
char **argv;
{
    unsigned short port;       /* port server binds to                */
    char buf[12];              /* buffer for sending & receiving data */
    struct sockaddr_in client; /* client address information          */
    struct sockaddr_in server; /* server address information          */
    int s;                     /* socket for accepting connections    */
    int ns;                    /* socket connected to client          */
    int namelen;               /* length of client name               */

    /* Check arguments. Should be only one: the port number to bind to. */

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s port\n", argv[0]);
        exit(1);
    }

    /* First argument should be the port. */
    port = (unsigned short) atoi(argv[1]);

    /* Make socket */
    if ((s = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        tcperror("Socket()");
        exit(2);
    }

    /* Specify sockaddr_in */
    server.sin_family = AF_INET;
    server.sin_port   = htons(port);    /* htons(litteEndian) = BigEndian */
    server.sin_addr.s_addr = INADDR_ANY;

    /* Bind the socket to "the" server address. */
    if (bind(s, (struct sockaddr *)&server, sizeof(server)) < 0) /* cast to type "sockaddr" */
    {
        tcperror("Bind()");
        exit(3);
    }

    /* Listen for connections. Specify the backlog as 1. */
    if (listen(s, 1) != 0)
    {
        tcperror("Listen()");
        exit(4);
    }

    /* Accept "a" connection to the socket which make "a" connection. */
    namelen = sizeof(client);
    if ((ns = accept(s, (struct sockaddr *)&client, &namelen)) == -1)
    {
        tcperror("Accept()");
        exit(5);
    }

    /*
     * Receive the message on the newly connected socket.
     */
    if (recv(ns, buf, sizeof(buf), 0) == -1)
    {
        tcperror("Recv()");
        exit(6);
    }

    /*
     * Send the message back to the client.
     */
    if (send(ns, buf, sizeof(buf), 0) < 0)
    {
        tcperror("Send()");
        exit(7);
    }

    close(ns);
    close(s);

    printf("Server ended successfully\n");
    exit(0);
}

#include "ChatWindow.h"
#include <QtWidgets/QApplication>
#include "ChatSession.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ChatSession session;


    ChatWindow user1{"Marian", session};
    ChatWindow user2{"Aurel", session};
    ChatWindow user3{"Albert", session};
    user1.show();
    user2.show();
    user3.show();
    return a.exec();
}

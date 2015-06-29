/***** < ivan *****/
#ifndef WEBBROWSER_H
#define WEBBROWSER_H

#include <QWebPage>
#include "../webpage.h"

class WebBrowser
{
public:
    static void run(QWebPage *phantomPage, WebPage *webpage);
    static void setPage(WebPage* webpage);
    static void exit();
private:
    WebBrowser();
};

#endif // WEBBROWSER_H

/***** ivan > *****/

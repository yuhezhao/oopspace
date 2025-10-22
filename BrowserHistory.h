#ifndef BROWSER_HISTORY_H
#define BROWSER_HISTORY_H

#include <stack>
#include <string>

class BrowserHistory {
private:
    std::stack<std::string> backHistory; // 只存“回退”历史
    std::string currentPage;             // 当前页面

public:
    BrowserHistory();                     // 构造：当前为“home page”
    void visitPage(std::string url);      // 访问新页面：把当前页面压入栈，然后切换
    void goBack();                        // 回退：如果有历史就回到上一页
    bool canGoBack();                     // 是否还能回退
    std::string getCurrentPage();         // 返回当前页面
    int getBackHistorySize();             // 回退栈大小（页数）
};

#endif

#include "BrowserHistory.h"

BrowserHistory::BrowserHistory()
: currentPage("home page") {
    // 极简：不做其它初始化
}

void BrowserHistory::visitPage(std::string url) {
    // 把当前页放进回退历史，然后切换到新页
    backHistory.push(currentPage);
    currentPage = url;
}

void BrowserHistory::goBack() {
    // 只有当有历史时才回退；没有就什么也不做
    if (!backHistory.empty()) {
        currentPage = backHistory.top();
        backHistory.pop();
    }
}

bool BrowserHistory::canGoBack() {
    return !backHistory.empty();
}

std::string BrowserHistory::getCurrentPage() {
    return currentPage;
}

int BrowserHistory::getBackHistorySize() {
    return static_cast<int>(backHistory.size());
}

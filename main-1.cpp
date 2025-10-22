#include <iostream>
#include "BrowserHistory.h"

int main() {
    BrowserHistory bh;

    // 初始状态
    std::cout << "Current: " << bh.getCurrentPage() << "\n";

    // 访问两个页面（操作少，够用就行）
    bh.visitPage("news");
    bh.visitPage("sports");

    std::cout << "Current: " << bh.getCurrentPage() << "\n";
    std::cout << "Back size: " << bh.getBackHistorySize() << "\n";

    // 回退一次
    if (bh.canGoBack()) {
        bh.goBack();
    }
    std::cout << "After back, current: " << bh.getCurrentPage() << "\n";

    // 再回退一次
    if (bh.canGoBack()) {
        bh.goBack();
    }
    std::cout << "After back again, current: " << bh.getCurrentPage() << "\n";

    // 没有前进功能（可选扩展不做），也不做更多输入交互（保持最简）
    return 0;
}

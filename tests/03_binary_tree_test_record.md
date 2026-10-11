# 第三题：二叉树遍历测试记录

代码文件：`code/03_binary_tree.cpp`

## 本地验证

作者在 Windows PowerShell 中使用以下命令成功编译、运行：

```powershell
g++ -std=c++17 binary_tree.cpp -o binary_tree.exe
.\binary_tree.exe
```

截图实际输出：

```text
Preorder: 1 2 4 5 3
Inorder: 4 2 5 1 3
```

对于 `tree[7] = {1, 2, 3, 4, 5, -1, -1}`，这两组结果均符合预期。

先前编译器提示的 `assignment of read-only location` 和 `expected ';'` 已在最终成功运行前修复。尚未记录更多不同树形的测试结果。

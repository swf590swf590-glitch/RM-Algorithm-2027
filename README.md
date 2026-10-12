# 崇实战队 27 赛季算法组第一次作业

> **作业仓库（四道编程题已完成，最终材料与群收集表尚未完成）**  
> 截止时间：2026-10-15 23:30。按作业原文，完成后还需要在群内收集表填写仓库地址。

## 文件说明

- `code/01_reverse_array.cpp`：第一题代码，已实现标准输入、双指针原地反转与空格分隔输出；用户已确认本地运行成功，完整边界测试待确认。
- `code/02_climb_stairs.cpp`：第二题代码，递归与迭代计算爬楼梯方法数；作者在本地编译成功，已确认 n=0、1、5 三组运行结果正确。
- `tests/02_climb_stairs_test_plan.md`：第二题测试计划与已确认的本地运行结果。
- `code/03_binary_tree.cpp`：第三题代码，使用数组建树，递归实现前序与中序遍历；作者已在本地编译运行成功。
- `tests/03_binary_tree_test_record.md`：第三题本地测试输出记录。
- `code/04_scores.cpp`：第四题成绩统计与安全查询程序；用户已确认本地运行成功，另有辅助环境多种输入测试记录。
- `tests/04_scores_test_record.md`：第四题测试记录与统计规则说明。
- `report/learning_report.md`：提交版式的 Markdown 学习报告（待本人通读核对）；`report/learning_report_draft.md` 保留为过程草稿。
- `report/learning_report.pdf`：尚待通过网页上传；在本地待上传材料包中已生成。
- `original/27赛季第一次作业.md`、`original/附件一.md`：已上传，从原始作业压缩包校验一致。
- `original/27赛季第一次作业.pdf`、`original/附件二.pdf`：已从原包整理，尚待网页上传。

## 当前进度

| 部分 | 状态 |
| --- | --- |
| 数组反转 | 已实现并由作者确认本地运行成功，待补充完整边界测试 |
| 爬楼梯 | 两个算法及输出已完成；本地编译成功，n=0、1、5 测试通过；其他测试待做 |
| 二叉树遍历 | 前序和中序递归遍历完成；本地编译及示例输出已确认 |
| 成绩统计与安全查询 | 七个函数均已整合；本地编译运行成功，辅助环境测试通过 |
| 学习报告 | `report/learning_report.md` 已上传；PDF 已生成，尚待上传；文稿需本人最终核对 |
| 原题文件与附件 | 两份 Markdown 已上传，两个原版 PDF 尚待上传 |
| 群收集表 | 未提交 |

## 编译第一题

```powershell
g++ -std=c++17 -Wall -Wextra code/01_reverse_array.cpp -o reverse_array.exe
.\reverse_array.exe
```

## 编译第二题

```powershell
g++ -std=c++17 -Wall -Wextra code/02_climb_stairs.cpp -o stairs.exe
.\stairs.exe
```

## 编译第三题

```powershell
g++ -std=c++17 -Wall -Wextra code/03_binary_tree.cpp -o binary_tree.exe
.\binary_tree.exe
```

## 编译第四题

```powershell
g++ -std=c++17 -Wall -Wextra code/04_scores.cpp -o scores.exe
.\scores.exe
```

## 提交前检查

- [x] 四道题均已有代码、成功运行的测试；完整边界测试仍可补充
- [x] 第一题已实现标准输入/输出及空数组处理逻辑（仍建议补做完整测试）
- [x] 原题 Markdown 与附件一 Markdown 已上传
- [ ] 在 `original/` 上传 `27赛季第一次作业.pdf` 和 `附件二.pdf`
- [x] Markdown 学习报告已在 `report/learning_report.md`
- [ ] 本人通读核对学习报告后，在 `report/` 上传 `learning_report.pdf`
- [ ] 将仓库链接填写在算法组 QQ 群收集表（不是仅仅上传 GitHub）

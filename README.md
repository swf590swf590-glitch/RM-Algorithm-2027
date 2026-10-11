# 崇实战队 27 赛季算法组第一次作业

> **学习中的作业仓库（尚未提交）**  
> 截止时间：2026-10-15 23:30。按作业原文，完成后还需要在群内收集表填写仓库地址。

## 文件说明

- `code/01_reverse_array.cpp`：第一题代码，已实现标准输入、双指针原地反转与空格分隔输出；用户已确认本地运行成功，完整边界测试待确认。
- `code/02_climb_stairs.cpp`：第二题代码，递归与迭代计算爬楼梯方法数；作者在本地编译成功，已确认 n=0、1、5 三组运行结果正确。
- `tests/02_climb_stairs_test_plan.md`：第二题测试计划与已确认的本地运行结果。
- `report/learning_report_draft.md`：学习报告初稿，记录已实际完成的学习内容；并非最终汇报。
- `original/`：待上传原题 Markdown、PDF 和参考附件。

## 当前进度

| 部分 | 状态 |
| --- | --- |
| 数组反转 | 已实现并由作者确认本地运行成功，待补充完整边界测试 |
| 爬楼梯 | 两个算法及输出已完成；本地编译成功，n=0、1、5 测试通过；其他测试待做 |
| 二叉树遍历 | 未开始 |
| 成绩统计与安全查询 | 未开始 |
| 学习报告 | Markdown 初稿；PDF 尚未生成 |
| 原题文件与附件 | 待上传 |
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

## 提交前检查

- [ ] 四道题尽力完成、编译并测试
- [x] 第一题已实现标准输入/输出及空数组处理逻辑（仍建议补做完整测试）
- [ ] 原题文件在仓库中
- [ ] 学习报告同时包含 `.md` 与 `.pdf`
- [ ] 将仓库链接填写在算法组 QQ 群收集表（不是仅仅上传 GitHub）

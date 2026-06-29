โจทย์ A

```mermaid
flowchart TD
Start([Start]) --> Input[/รับคะแนน score/]
Input --> D1{score >= 80?}
D1 -->|Yes| A[เกรด = A]
D1 -->|No| D2{score >= 70?}
D2 -->|Yes| B[เกรด = B]
D2 -->|No| D3{score >= 60?}
D3 -->|Yes| C[เกรด = C]
D3 -->|No| D4{score >= 50?}
D4 -->|Yes| D[เกรด = D]
D4 -->|No| F[เกรด = F]
A & B & C & D & F --> Output[/แสดงเกรด/]
Output --> End([End])
```

โจทย์ B

```mermaid
flowchart TD
Start([Start]) --> Input[/รับ a เเละ b/]
Input --> D1{a > b?}
D1 -->|Yes| A[/เเสดง a/]
D1 -->|No| B[/เเสดง b/]
A & B --> End([End])
```

โจทย์ C

```mermaid
flowchart TD
Start([Start]) --> Input[/รับ N/]
Input --> i[i = 1]
i --> D1{i <= N?}
D1 -->|Yes| A[พิมพ์ i]
D1 -->|No| END([END])
A --> B[i = i + 1]
B --> D1
```

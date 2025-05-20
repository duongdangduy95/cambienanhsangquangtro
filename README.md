# Cảm biến ánh sáng quang trở với Arduino

Mục tiêu: sử dụng **cảm biến ánh sáng quang trở (LDR)** để phát hiện mức ánh sáng môi trường và điều khiển **đèn LED** tương ứng. Khi ánh sáng yếu, LED sẽ sáng; khi ánh sáng mạnh, LED sẽ tắt. Ngoài ra, giá trị ánh sáng sẽ được in ra **Serial Monitor**.

---

## Mục tiêu

- Làm quen với cảm biến ánh sáng quang trở (LDR)
- Sử dụng tín hiệu **analog** để đo ánh sáng
- Kết hợp thêm tín hiệu **digital** nếu cảm biến hỗ trợ
- Điều khiển LED và hiển thị dữ liệu trên Serial Monitor

---

## 🧾 Giới thiệu về LDR

Quang trở (LDR - Light Dependent Resistor) là điện trở thay đổi giá trị theo cường độ ánh sáng:

- **Ánh sáng mạnh** → điện trở giảm → điện áp đầu ra tăng
- **Ánh sáng yếu** → điện trở tăng → điện áp đầu ra giảm

---

## Sơ đồ kết nối phần cứng

| Thành phần    | Arduino       |
|---------------|----------------|
| LDR → chia áp | A0             |
| Cảm biến digital | D7     |
| LDR → nguồn   | 5V             |
|  GND | GND     |



---

##  Nguyên lý hoạt động

- Arduino đọc giá trị **analog** từ LDR thông qua chân A0
- Nếu ánh sáng **mạnh hơn ngưỡng 800**, LED **tắt**
- Nếu ánh sáng **yếu hơn**, LED **sáng**
- Đồng thời hiển thị giá trị analog và digital ra Serial Monitor

---

## 📹 Video demo 

(https://youtu.be/ZoUZVQKqSyc)

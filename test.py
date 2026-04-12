import mysql.connector


def skibidi(cus_num, order_number):
    connection = None
    try:
        connection = mysql.connector.connect(
            host="localhost",
            user="root",
            password="$Giangvip12345",
            database="classicmodels"
        )
        cursor = connection.cursor()

        # Gọi procedure, None cho OUT parameters
        args = cursor.callproc(
            'skibidi', [cus_num, order_number, None, None, None, None, None])

        # Lấy OUT parameters từ args (index 1, 2, 3)
        cus_num = args[0]
        order_number = args[1]
        cus_name = args[2]
        cus_phone = args[3]
        cus_add = args[4]
        cus_country = args[5]
        cus_postalCode = args[6]

        if cus_num and order_number:
            print(f"Customer Number: {cus_num}")
            print(f"Order Number: {order_number}")
            print(f"Customer Name: {cus_name}")
            print(f"Customer Phone: {cus_phone}")
            print(f"Customer Address: {cus_add}")
            print(f"Customer Country: {cus_country}")
            print(f"Customer Postal Code: {cus_postalCode}")
        else:
            print(f"Không tìm thấy khách hàng {cus_num}.")

    except mysql.connector.Error as err:
        print(f"Error: {err}")

    finally:
        if connection and connection.is_connected():
            cursor.close()
            connection.close()


# Gọi hàm — thiếu dấu ) ở đây
skibidi(103, 10298)

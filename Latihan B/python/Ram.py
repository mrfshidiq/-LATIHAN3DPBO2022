# deklarasi kelas
class Ram:
    # deklarasi variabel
    __capacity = ""
    __price = 0
    # method dan konstruktor
    def __init__(self, capacity = "", price=0):
        self.__capacity = capacity
        self.__price = price
    #  get dans set semua variabel
    def setprice(self, price):
        self.__price = price
    def getprice(self):
        return self.__price
    def setcapacity(self, capacity):
        self.__capacity = capacity
    def getcapacity(self):
        return self.__capacity
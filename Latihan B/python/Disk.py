# deklarasi kelas
class Disk:
    # deklarasi variabel
    __type = ""
    __capacity = ""
    __price = 0
    # method dan konstruktor
    def __init__(self, type ="", capacity= "", price = 0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price
    #  get dans set semua variabel
    def setprice(self, price):
        self.__price = price
    def getprice(self):
        return self.__price
    def settype(self, type):
        self.__type = type
    def gettype(self):
        return self.__type
    def setcapacity(self, capacity):
        self.__capacity = capacity
    def getcapacity(self):
        return self.__capacity
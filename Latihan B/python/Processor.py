# deklarasi kelas
class Processor:
    # deklarasi variabel
    __name = ""
    __price = 0
    # method dan konstruktor
    def __init__(self, name = "", price = 0):
        self.__name = name
        self.__price = price
    #  get dans set semua variabel
    def setprice(self, price):
        self.__price = price
    def getprice(self):
        return self.__price
    def setname(self, name):
        self.__name = name
    def getname(self):
        return self.__name
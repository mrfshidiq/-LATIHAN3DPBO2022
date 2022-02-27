# Import/inlude objek
from Pc import Pc
from Processor import Processor
from Disk import Disk
from Ram import Ram

# deklarasi objek
proc1 = Processor()
disk1 = Disk()
ram1 = Ram()
pc1 = Pc()

# mengisi objek
proc1.setname("AMD Ryzen 5 3600")
proc1.setprice(3000000)
disk1.settype("SSD")
disk1.setcapacity("512GB")
disk1.setprice(1200000)
ram1.setcapacity("32GB")
ram1.setprice(2200000)
# menghirung total price
tprice = proc1.getprice()+disk1.getprice()+ram1.getprice()
# masukkan ke objek pc
pc1 = Pc()
pc1.setproc(proc1)
pc1.setdisk(disk1)
pc1.setram(ram1)
pc1.settotalprice(tprice)
# tampilkan
pc1.printpc()

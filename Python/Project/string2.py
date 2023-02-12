import rsa

# generate public and private keys with
# rsa.newkeys method,this method accepts
# key length as its parameter
# key length should be atleast 16
print("\nEncryption with Python\n")

print("\nHello this is a short program which is a showcase of the Cryptography and the Fernet library which is present in Python.")

print("Encryption is a technique which is widely used in day to day life. From Your Whatsapp messages to your Google Search queries. Here is a Small Demo for You :\n")



publicKey, privateKey = rsa.newkeys(512)

# this is the string that we will be encrypting
message = input("Enter a String : ")

# rsa.encrypt method is used to encrypt
# string with public key string should be
# encode to byte string before encryption
# with encode method
encMessage = rsa.encrypt(message.encode(),
						publicKey)

print("original string: ", message)
print("encrypted string: ", encMessage)

# the encrypted message can be decrypted
# with ras.decrypt method and private key
# decrypt method returns encoded byte string,
# use decode method to convert it to string
# public key cannot be used for decryption
decMessage = rsa.decrypt(encMessage, privateKey).decode()

print("decrypted string: ", decMessage)


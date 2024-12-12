import time
from selenium import webdriver
from selenium.webdriver.common.by import By

class GoogleMapsAutomation:
    def setUp(self):
        self.driver = webdriver.Chrome()

    def search_location(self):
        try:
            g_link = "https://www.google.com/maps"
            ip_link = '//*[@id="searchboxinput"]'  # XPath for the search input field
            directions_xpath = '//*[@id="searchbox-searchbutton"]'  # XPath for the search button

            self.driver.get(g_link)
            time.sleep(2) 

            name = input("Enter Location: ") 
            search_input = self.driver.find_element(By.XPATH, ip_link)
            search_input.send_keys(name)
            time.sleep(1)
            
            directions = self.driver.find_element(By.XPATH, directions_xpath)
            directions.click()
            time.sleep(50) 

        except Exception as e:
            print(f"An error occurred: {str(e)}")

    def tearDown(self):
        self.driver.quit()

if __name__ == "__main__":
    automation = GoogleMapsAutomation()
    automation.setUp()
    automation.search_location()
    automation.tearDown()

Sublist Development Guide
====================
This guide provides development related information for Sublist software development.

---
## Requirements

1. Mac OS X and Xcode

---
## RestKit Development

### Basic Setup

Read [RestKit](http://www.raywenderlich.com/58682/introduction-restkit-tutorial)
```
sudo gem install cocoapods
pod setup
cd ~/project/sublios/
touch Podfile
```

Add the following to `Podfile`
```
platform :ios, '9.0'
pod 'RestKit', '~> 0.26.0'
```
Then ```pod install```

Close `sublios.xcodeproj` and open `sublios.xcworkspace`.

Now you can `#import <RestKit/RestKit.h>`.

### HTTPS access

By default, IOS app will only be able to access HTTPS. Assuming that this is already configured on the server, let's configure it on client using Xcode.

Go to `Pods` project `Build Settings`. Then switch to `AFNetworking`, then add the following Preprocessor Macros and add `_AFNETWORKING_ALLOW_INVALID_SSL_CERTIFICATES_=1`.

Then, lets configure [ATS](http://ste.vn/2015/06/10/configuring-app-transport-security-ios-9-osx-10-11/). 

Go to `Info.plist`'s source view. Then add this.
```
<key>NSAppTransportSecurity</key>
<dict>
  <key>NSExceptionDomains</key>
  <dict>
    <key>ioboxes.com</key>
    <dict>
      <!--Include to allow subdomains-->
      <key>NSIncludesSubdomains</key>
      <true/>
      <!--Include to allow HTTP requests-->
      <key>NSTemporaryExceptionAllowsInsecureHTTPLoads</key>
      <true/>
      <!--Include to specify minimum TLS version-->
      <key>NSTemporaryExceptionMinimumTLSVersion</key>
      <string>TLSv1.1</string>
    </dict>
  </dict>
</dict>
```
---
## Setup Oauth

### Guides

- [Authentication](http://restkit.readthedocs.org/en/latest/authentication.html)

### 
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
// UUID: 703DE7EE-0B01-3BB8-9946-8A6F8A9276E8
//
//                           Arch: x86_64
//                Current version: 800.0.0
//          Compatibility version: 1.0.0
//                 Source version: 1323.3.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface IMDMessageServicesCenter : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestExpireStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestExpireStateWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)requestRoutingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_connect;
- (_Bool)_disconnect;
- (void)_disconnected;
- (void)dealloc;
- (id)init;

@end


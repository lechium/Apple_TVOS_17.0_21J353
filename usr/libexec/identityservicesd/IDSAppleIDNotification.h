//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSEndpointCapabilities, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface IDSAppleIDNotification : NSObject
{
    NSString *_appleID;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    NSString *_deviceModel;	// 24 = 0x18
    NSMutableSet *_aliases;	// 32 = 0x20
    NSMutableSet *_sessions;	// 40 = 0x28
    NSMutableSet *_serviceTypes;	// 48 = 0x30
    NSMutableDictionary *_sessionToBlockMap;	// 56 = 0x38
    NSData *_pushToken;	// 64 = 0x40
    IDSEndpointCapabilities *_deviceCapabilities;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000193148
@property(retain, nonatomic) IDSEndpointCapabilities *deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property(retain, nonatomic) NSDictionary *sessionToBlockMap; // @synthesize sessionToBlockMap=_sessionToBlockMap;
@property(retain, nonatomic) NSMutableSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(retain, nonatomic) NSMutableSet *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSMutableSet *aliases; // @synthesize aliases=_aliases;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forSession:(id)arg2;	// IMP=0x0010000000192fb4
- (void)addSession:(id)arg1;	// IMP=0x0010000000192f68
- (void)addServiceType:(id)arg1;	// IMP=0x0010000000192f52
- (void)addAlias:(id)arg1;	// IMP=0x0010000000192f35
- (id)init;	// IMP=0x0010000000192e92

@end


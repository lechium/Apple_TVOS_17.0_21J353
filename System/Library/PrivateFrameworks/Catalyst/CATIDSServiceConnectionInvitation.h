//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUUID;
@protocol CATCancelable;

__attribute__((visibility("hidden")))
@interface CATIDSServiceConnectionInvitation : NSObject
{
    NSUUID *_connectionIdentifier;	// 8 = 0x8
    id <CATCancelable> _assertion;	// 16 = 0x10
    NSString *_senderAppleID;	// 24 = 0x18
    NSString *_senderAddress;	// 32 = 0x20
    unsigned long long _messagingVersion;	// 40 = 0x28
    NSDictionary *_userInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000043291
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long messagingVersion; // @synthesize messagingVersion=_messagingVersion;
@property(readonly, copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(readonly, copy, nonatomic) NSString *senderAppleID; // @synthesize senderAppleID=_senderAppleID;
@property(readonly, nonatomic) id <CATCancelable> assertion; // @synthesize assertion=_assertion;
@property(readonly, nonatomic) NSUUID *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
- (id)initWithConnectionIdentifier:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 assertion:(id)arg4 messagingVersion:(unsigned long long)arg5 userInfo:(id)arg6;	// IMP=0x000000000004311e
- (id)initWithSenderAppleID:(id)arg1 senderAddress:(id)arg2 assertion:(id)arg3 messagingVersion:(unsigned long long)arg4 userInfo:(id)arg5;	// IMP=0x000000000004303a

@end


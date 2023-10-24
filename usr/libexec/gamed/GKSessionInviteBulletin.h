//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface GKSessionInviteBulletin
{
    NSURL *_sessionURL;	// 104 = 0x68
    NSString *_senderName;	// 112 = 0x70
    NSString *_userMessage;	// 120 = 0x78
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000001c163e
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001c1636
- (void).cxx_destruct;	// IMP=0x00200000001c2eaa
@property(retain, nonatomic) NSString *userMessage; // @synthesize userMessage=_userMessage;
@property(retain, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(retain, nonatomic) NSURL *sessionURL; // @synthesize sessionURL=_sessionURL;
- (void)assembleBulletin;	// IMP=0x00100000001c2dc6
- (void)handleAction:(id)arg1;	// IMP=0x00100000001c2ace
- (void)handleAcceptAction;	// IMP=0x00100000001c27c5
- (id)assembledMessage;	// IMP=0x00100000001c2643
- (id)aggregateDictionaryKey;	// IMP=0x00100000001c262f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001c23fb
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001c219c
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00100000001c1eab

@end


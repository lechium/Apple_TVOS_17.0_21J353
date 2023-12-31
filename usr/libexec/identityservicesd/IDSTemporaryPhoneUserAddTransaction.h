//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSTemporaryPhoneUser, IDSTemporaryPhoneUserCredential, NSString;

@interface IDSTemporaryPhoneUserAddTransaction : NSObject
{
    IDSTemporaryPhoneUser *_user;	// 8 = 0x8
    IDSTemporaryPhoneUserCredential *_credential;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004332f0
@property(retain, nonatomic) IDSTemporaryPhoneUserCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) IDSTemporaryPhoneUser *user; // @synthesize user=_user;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long type;
- (id)initWithUser:(id)arg1 credential:(id)arg2;	// IMP=0x001000000043314e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


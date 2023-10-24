//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class PBOpenApplicationRequest, PBRestrictionServiceRequest;

@interface PBOpenAppRestrictionTransaction : BSTransaction
{
    _Bool _passwordWasRequested;	// 8 = 0x8
    PBOpenApplicationRequest *_openRequest;	// 16 = 0x10
    unsigned long long _restrictionValue;	// 24 = 0x18
    PBRestrictionServiceRequest *_restrictionRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000097d10
@property(readonly, nonatomic) PBRestrictionServiceRequest *restrictionRequest; // @synthesize restrictionRequest=_restrictionRequest;
@property(readonly, nonatomic) _Bool passwordWasRequested; // @synthesize passwordWasRequested=_passwordWasRequested;
@property(nonatomic) unsigned long long restrictionValue; // @synthesize restrictionValue=_restrictionValue;
@property(readonly, nonatomic) PBOpenApplicationRequest *openRequest; // @synthesize openRequest=_openRequest;
- (_Bool)_needsUI;	// IMP=0x0010000000097b92
- (void)_begin;	// IMP=0x001000000009780e
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000009768b

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol AKFollowUpProvider;

@interface AKLivenessRequestProvider
{
    NSString *_event;	// 8 = 0x8
    unsigned long long _livenessReason;	// 16 = 0x10
    NSString *_pushToken;	// 24 = 0x18
    id <AKFollowUpProvider> _followUpProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000aeb6d
@property(retain, nonatomic) id <AKFollowUpProvider> followUpProvider; // @synthesize followUpProvider=_followUpProvider;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) unsigned long long livenessReason; // @synthesize livenessReason=_livenessReason;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
- (_Bool)_telemtryOptInForAccount:(id)arg1 withWalrusStatus:(_Bool)arg2;	// IMP=0x00100000000ae78e
- (id)authKitBody;	// IMP=0x00100000000ad48e
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ad1ed

@end

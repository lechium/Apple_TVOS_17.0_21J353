//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAnalyticsHAPServiceData : HMFObject
{
    _Bool _isPrimary;	// 8 = 0x8
    _Bool _ownerUser;	// 9 = 0x9
    NSString *_serviceType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000596b51
@property(readonly, nonatomic) _Bool ownerUser; // @synthesize ownerUser=_ownerUser;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (id)initWithServiceType:(id)arg1 isPrimary:(_Bool)arg2 ownerUser:(_Bool)arg3;	// IMP=0x0000000000596a8c

@end


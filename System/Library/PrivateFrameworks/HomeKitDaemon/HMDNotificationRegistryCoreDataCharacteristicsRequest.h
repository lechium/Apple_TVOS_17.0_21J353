//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNotificationRegistryCharacteristicsRequest, NSArray;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistryCoreDataCharacteristicsRequest : HMFObject
{
    HMDNotificationRegistryCharacteristicsRequest *_request;	// 8 = 0x8
    NSArray *_characteristics;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b0eaef
@property(readonly) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly) HMDNotificationRegistryCharacteristicsRequest *request; // @synthesize request=_request;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b0e9ab
- (id)initWithRequest:(id)arg1 characteristics:(id)arg2;	// IMP=0x0000000000b0e909

@end

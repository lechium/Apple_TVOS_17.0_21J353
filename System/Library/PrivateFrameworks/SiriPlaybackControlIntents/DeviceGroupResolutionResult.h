//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceGroupResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x00600000001e8c58
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x00600000001e8beb
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x00600000001e8b95
+ (id)confirmationRequiredWithDeviceGroupToConfirm:(id)arg1;	// IMP=0x00600000001e8b01
+ (id)disambiguationWithDeviceGroupsToDisambiguate:(id)arg1;	// IMP=0x00600000001e8aae
+ (id)successWithResolvedDeviceGroup:(id)arg1;	// IMP=0x00600000001e8a67
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x00000000001e8d7a

@end


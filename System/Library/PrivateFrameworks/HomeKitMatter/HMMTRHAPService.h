//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPService.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMMTRHAPService : HAPService
{
    NSNumber *_endpoint;	// 8 = 0x8
}

+ (id)chipPluginServiceForCharacteristic:(id)arg1;	// IMP=0x006000000001cb3d
- (void).cxx_destruct;	// IMP=0x000000000001cb2a
@property(retain, nonatomic) NSNumber *endpoint; // @synthesize endpoint=_endpoint;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5 endpoint:(id)arg6;	// IMP=0x000000000001ca6e

@end


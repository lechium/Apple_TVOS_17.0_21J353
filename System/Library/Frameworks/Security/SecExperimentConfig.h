//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SecExperimentConfig : NSObject
{
    unsigned int _fleetSampleRate;	// 8 = 0x8
    unsigned int _deviceSampleRate;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSDictionary *_configurationData;	// 24 = 0x18
    NSDictionary *_config;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000015d8d
@property(retain) NSDictionary *config; // @synthesize config=_config;
@property(retain) NSDictionary *configurationData; // @synthesize configurationData=_configurationData;
@property unsigned int deviceSampleRate; // @synthesize deviceSampleRate=_deviceSampleRate;
@property unsigned int fleetSampleRate; // @synthesize fleetSampleRate=_fleetSampleRate;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) _Bool isSampled;
- (_Bool)shouldRunWithSamplingRate:(id)arg1;	// IMP=0x0000000000015bda
- (unsigned int)hostHash;	// IMP=0x0000000000015baf
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000015a07

@end


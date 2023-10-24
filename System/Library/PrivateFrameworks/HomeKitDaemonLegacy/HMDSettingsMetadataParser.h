//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDSettingsControllerDependency;

__attribute__((visibility("hidden")))
@interface HMDSettingsMetadataParser : NSObject
{
    id <HMDSettingsControllerDependency> _dependency;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000046745a
- (void).cxx_destruct;	// IMP=0x000000000046744c
@property(readonly) __weak id <HMDSettingsControllerDependency> dependency; // @synthesize dependency=_dependency;
- (id)logIdentifier;	// IMP=0x00000000004673bc
- (id)modelsFromMetadata:(id)arg1;	// IMP=0x0000000000465902
- (id)initWithDependency:(id)arg1;	// IMP=0x000000000046589e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


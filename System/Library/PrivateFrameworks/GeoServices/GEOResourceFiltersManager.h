//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOActiveResourceFilters, GEOResourceManifestConfiguration, NSSet;
@protocol GEOResourceFiltersManagerDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceFiltersManager : NSObject
{
    GEOResourceManifestConfiguration *_configuration;	// 8 = 0x8
    GEOActiveResourceFilters *_activeFilters;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    id <GEOResourceFiltersManagerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007fa226
@property(nonatomic) __weak id <GEOResourceFiltersManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deactivateScenario:(int)arg1;	// IMP=0x00000000007fa017
- (void)activateScenario:(int)arg1;	// IMP=0x00000000007f9df7
- (void)deactivateScale:(int)arg1;	// IMP=0x00000000007f9c0f
- (void)activateScale:(int)arg1;	// IMP=0x00000000007f9c09
- (void)_deactivateFilters:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f9a6c
- (void)_activateFilters:(CDUnknownBlockType)arg1 setValueBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000007f990a
- (void)_writeToDisk;	// IMP=0x00000000007f974e
@property(readonly, nonatomic) NSSet *activeScenarios;
@property(readonly, nonatomic) NSSet *activeScales;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000007f91d8
- (id)init;	// IMP=0x00000000007f91ae

@end


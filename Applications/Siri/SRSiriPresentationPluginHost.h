//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface SRSiriPresentationPluginHost : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSMutableDictionary *_bundleURLsByBundleIdentifier;	// 24 = 0x18
}

+ (id)sharedSiriPresentationPluginHost;	// IMP=0x0040000000050a9c
+ (id)_defaultURL;	// IMP=0x00100000000509ea
- (void).cxx_destruct;	// IMP=0x0020000000052187
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void)_save;	// IMP=0x0010000000051f35
- (void)_load;	// IMP=0x0010000000051bf9
- (void)_loadFromPropertyListRepresentation:(id)arg1;	// IMP=0x00100000000519d2
- (id)_propertyListRepresentation;	// IMP=0x0010000000051862
- (id)presentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x001000000005174c
- (void)preloadPluginBundles;	// IMP=0x001000000005168a
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;	// IMP=0x001000000005158d
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;	// IMP=0x00100000000514ff
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;	// IMP=0x0010000000051425
- (void)_rescanBundles;	// IMP=0x0010000000050f93
- (id)_builtInPresentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x0010000000050e86
- (id)_carPlayPresentationClassString;	// IMP=0x0010000000050e56
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;	// IMP=0x0010000000050c74
- (id)init;	// IMP=0x0010000000050c19
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000050b72

@end


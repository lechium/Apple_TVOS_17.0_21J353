//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface TCCDBundle : NSObject
{
    struct __CFBundle *_cfBundle;	// 8 = 0x8
}

+ (id)bundleWithIdentifier:(id)arg1;	// IMP=0x004000000001efcf
+ (id)bundleWithURL:(id)arg1;	// IMP=0x001000000001ef82
- (_Bool)isPathContainedWithin:(id)arg1;	// IMP=0x002000000001f7f1
- (_Bool)isPathTheMainExecutable:(id)arg1;	// IMP=0x001000000001f6f5
@property(readonly, getter=isRunsIndependentlyOfCompanionApp) _Bool runsIndependentlyOfCompanionApp;
@property(readonly, getter=isWatchOnly) _Bool watchOnly;
@property(readonly, getter=isWatchKitApp) _Bool watchKitApp;
- (id)localizedUsageDescriptionForKey:(id)arg1;	// IMP=0x001000000001f50d
@property(readonly, getter=isLSUIElement) _Bool LSUIElement;
@property(readonly) NSString *extensionPointIdentifier;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSDictionary *localizedInfoDictionary;
@property(readonly) NSDictionary *infoDictionary;
@property(readonly) NSURL *executableURL;
@property(readonly) NSString *executablePath;
- (id)description;	// IMP=0x001000000001f090
@property(readonly) NSURL *bundleURL;
@property(readonly) NSString *bundlePath;
@property(readonly) NSString *bundleIdentifier;
- (void)dealloc;	// IMP=0x001000000001ef43
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000001ee29
- (id)initWithURL:(id)arg1;	// IMP=0x001000000001ed5f

@end


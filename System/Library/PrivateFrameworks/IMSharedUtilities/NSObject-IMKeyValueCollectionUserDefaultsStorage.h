//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (IMKeyValueCollectionUserDefaultsStorage)
+ (_Bool)isSingleton;	// IMP=0x0030000000091790
+ (_Bool)replaceSingletonWithSubclass:(id)arg1;	// IMP=0x003000000009172f
+ (_Bool)isSingletonOverridden;	// IMP=0x00300000000916f4
+ (id)overriddenSingleton;	// IMP=0x0030000000091632
+ (void)replaceSingletonWithObject:(id)arg1;	// IMP=0x003000000009155f
+ (void)removeSingletonOverride;	// IMP=0x003000000009154b
+ (void)overrideSingletonWithObject:(id)arg1;	// IMP=0x003000000009143c
+ (id)singletonOverride;	// IMP=0x003000000009137a
+ (id)_createSingleton__im;	// IMP=0x00300000000912b2
- (_Bool)isArchivable_im;	// IMP=0x001000000003830f
- (_Bool)__isSingletonProxy__im;	// IMP=0x0010000000091727
- (void)__im_performAsynchronousTest:(CDUnknownBlockType)arg1 name:(id)arg2 timeout:(double)arg3 finalizer:(CDUnknownBlockType)arg4;	// IMP=0x0010000000091e3c
@end


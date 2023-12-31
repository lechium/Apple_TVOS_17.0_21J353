//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPBitmapStore;

__attribute__((visibility("hidden")))
@interface UIStatusBarCache : NSObject
{
    CPBitmapStore *_store;	// 8 = 0x8
    _Bool _writeable;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0060000000fb30cc
- (void).cxx_destruct;	// IMP=0x0000000000fb3a55
@property(readonly, nonatomic, getter=isWriteable) _Bool writeable; // @synthesize writeable=_writeable;
- (void)removeImagesInGroup:(id)arg1;	// IMP=0x0000000000fb37ae
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;	// IMP=0x0000000000fb35be
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3;	// IMP=0x0000000000fb3368
- (id)init;	// IMP=0x0000000000fb3109

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;

__attribute__((visibility("hidden")))
@interface MCResourceProgressObserver : NSObject
{
    _Bool _progressObserversSet;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSProgress *_progress;	// 24 = 0x18
    CDUnknownBlockType _cancelHandler;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x0000000000003a83
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000039a6
- (void)invalidate;	// IMP=0x0000000000003927
- (id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003855

@end


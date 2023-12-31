//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

__attribute__((visibility("hidden")))
@interface _GEOMirroredProgress : NSProgress
{
    NSProgress *_originalProgress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d4e537
- (void)_replaceObservedProgressWith:(id)arg1;	// IMP=0x0000000000d4e4ad
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000d4e463
- (void)_update;	// IMP=0x0000000000d4e221
- (void)_unregisterForKVO;	// IMP=0x0000000000d4e0ec
- (void)_registerForKVO;	// IMP=0x0000000000d4dfb4
- (void)dealloc;	// IMP=0x0000000000d4df76
- (id)_initWithMirroredProgressForSubclasses:(id)arg1;	// IMP=0x0000000000d4dedd
- (id)initWithMirroredProgress:(id)arg1;	// IMP=0x0000000000d4de98

@end


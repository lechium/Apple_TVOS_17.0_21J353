//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BKDisplayRenderOverlayPersistenceCoordinator : NSObject
{
    NSString *_rootPersistencePath;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000070a1c
- (void).cxx_destruct;	// IMP=0x0020000000070a0c
- (id)_fileNameForOverlay:(id)arg1;	// IMP=0x0010000000070922
- (id)_filePathForOverlay:(id)arg1;	// IMP=0x0010000000070897
- (_Bool)destroyOverlay:(id)arg1;	// IMP=0x0010000000070813
- (_Bool)saveOverlay:(id)arg1;	// IMP=0x0010000000070180
- (id)rebuildPersistentOverlays;	// IMP=0x001000000006fd56
- (id)init;	// IMP=0x001000000006fcad

@end


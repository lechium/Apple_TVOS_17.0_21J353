//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSiriScreenActionManager;

@interface PBSiriScreenActionContextProvider : NSObject
{
    PBSiriScreenActionManager *_screenActionManager;	// 8 = 0x8
}

+ (id)_JSONSerializedSemanticContext:(id)arg1;	// IMP=0x002000000011cda0
- (void).cxx_destruct;	// IMP=0x002000000011ce54
@property(readonly, nonatomic) PBSiriScreenActionManager *screenActionManager; // @synthesize screenActionManager=_screenActionManager;
- (id)_screenActionInfoForScreenItem:(id)arg1;	// IMP=0x001000000011ca5f
- (id)getCurrentContext;	// IMP=0x001000000011c328
- (_Bool);	// IMP=0x001000000011c320
- (void)dealloc;	// IMP=0x001000000011c29a
- (id)initWithScreenActionManager:(id)arg1;	// IMP=0x001000000011bffc

@end


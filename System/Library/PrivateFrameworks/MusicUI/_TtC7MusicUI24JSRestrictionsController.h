//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSValue, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7MusicUI24JSRestrictionsController : NSObject
{
    MISSING_TYPE *_isExplicitContentRestricted;	// 8 = 0x8
    MISSING_TYPE *_areMusicVideosRestricted;	// 16 = 0x10
    MISSING_TYPE *_isTVRestricted;	// 24 = 0x18
    MISSING_TYPE *_areMoviesRestricted;	// 32 = 0x20
    MISSING_TYPE *_isSocialDisabled;	// 40 = 0x28
    MISSING_TYPE *restrictionsController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003a940
- (id)init;	// IMP=0x000000000003a90a
@property(nonatomic, retain) JSValue *isSocialDisabled;
@property(nonatomic, retain) JSValue *areMoviesRestricted;
@property(nonatomic, retain) JSValue *isTVRestricted;
@property(nonatomic, retain) JSValue *areMusicVideosRestricted;
@property(nonatomic, retain) JSValue *isExplicitContentRestricted;

@end

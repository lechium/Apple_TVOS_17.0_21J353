//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASGreenTeaLogger : NSObject
{
    struct ct_green_tea_logger_s *_logger;	// 8 = 0x8
}

@property(readonly, nonatomic) struct ct_green_tea_logger_s *logger; // @synthesize logger=_logger;
- (void)willRequestAppList;	// IMP=0x0000000000002284
- (void)willTransmitLocationForSearch;	// IMP=0x000000000000220d
- (void)willAccessLocationForSearch;	// IMP=0x0000000000002196
- (void)dealloc;	// IMP=0x000000000000215c
- (id)init;	// IMP=0x0000000000002110

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGuidanceStepInfo : NSObject
{
    NSString *_roadName;	// 8 = 0x8
    int _routePoint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005da442
@property(readonly, nonatomic) int routePoint; // @synthesize routePoint=_routePoint;
@property(readonly, retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
- (id)initWithRoadName:(id)arg1 point:(int)arg2;	// IMP=0x00000000005da3a4

@end


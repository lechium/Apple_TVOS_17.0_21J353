//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHStrokeGroup.h"

@interface CHTimeWindowStrokeGroup : CHStrokeGroup
{
    double _startTimestamp;	// 8 = 0x8
    double _endTimestamp;	// 16 = 0x10
}

@property(readonly, nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7;	// IMP=0x00000000001541e0
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 startTimestamp:(double)arg5 endTimestamp:(double)arg6;	// IMP=0x0000000000154140

@end


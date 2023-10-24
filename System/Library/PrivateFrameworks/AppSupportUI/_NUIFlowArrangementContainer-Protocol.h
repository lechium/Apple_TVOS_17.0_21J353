//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIArrangementContainer-Protocol.h>

@protocol _NUIFlowArrangementContainer <NUIArrangementContainer>
- (long long)alignmentForCell:(const struct _NUIFlowArrangementCell *)arg1 inAxis:(long long)arg2;
- (void)populateFlowArrangementCells:(void *)arg1;

@optional
- (_Bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;
- (_Bool)canCancelMeasurementForCompression;
- (long long)distributionForRowAtIndex:(long long)arg1 ofTotalRowCount:(long long)arg2 withCells:(const void *)arg3;
- (struct CGSize)fittingSizeForCell:(const struct _NUIFlowArrangementCell *)arg1 withProposedSize:(struct CGSize)arg2;
@end

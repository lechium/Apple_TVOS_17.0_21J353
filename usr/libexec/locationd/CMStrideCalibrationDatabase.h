//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CMStrideCalibrationDatabaseDelegate;

@interface CMStrideCalibrationDatabase : NSObject
{
    struct unique_ptr<CMStrideCalRecorderDb, std::default_delete<CMStrideCalRecorderDb>> fStrideCalDb;	// 8 = 0x8
    id <CMStrideCalibrationDatabaseDelegate> _delegate;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00200000007d36d7
- (void).cxx_destruct;	// IMP=0x00100000007d36b6
@property(nonatomic) id <CMStrideCalibrationDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerStrideCalDbForColdStorage:(id)arg1;	// IMP=0x00100000007d35dc
- (_Bool)queryStrideLengthTracks:(void *)arg1;	// IMP=0x00100000007d35cb
- (id)copyHistory;	// IMP=0x00100000007d3450
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x00100000007d2fab
- (_Bool)isCalibrationConvergedStdForBinWithSpeed:(double)arg1;	// IMP=0x00100000007d2c7c
- (void)addEntry:(struct CLStrideCalEntry)arg1;	// IMP=0x00100000007d26af
- (id)initWithSilo:(id)arg1;	// IMP=0x00100000007d2180

@end


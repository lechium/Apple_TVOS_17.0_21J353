//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANODv4
{
}

+ (id)filterThresholds;	// IMP=0x00800000000fe668
+ (Class)shotflowNetworkClass;	// IMP=0x00800000000fe657
+ (id)supportedLabelKeys;	// IMP=0x00800000000fe5f4
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000fe9db
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x00000000000fe906
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000fe7ae
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000fe759
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000fe704

@end


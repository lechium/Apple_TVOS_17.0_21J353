//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ETDataSourceBuf : NSObject
{
    struct map<std::string, std::shared_ptr<Espresso::blob<float, 2>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> blobs;	// 8 = 0x8
    int number_of_data_points;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000006ac98e
- (void).cxx_destruct;	// IMP=0x00000000006ac97c
- (float *)dataAtIndex:(unsigned long long)arg1 key:(const void *)arg2;	// IMP=0x00000000006ac88e
- (void)setBlobs:(const void *)arg1 numberOfDataPoints:(int)arg2 nonBatches:(const void *)arg3;	// IMP=0x00000000006ac5ba
- (id)dataPointAtIndex:(int)arg1;	// IMP=0x00000000006ac3c7
- (int)numberOfDataPoints;	// IMP=0x00000000006ac3be

@end


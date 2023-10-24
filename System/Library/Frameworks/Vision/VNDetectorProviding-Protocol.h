//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, VNDetector;

@protocol VNDetectorProviding <NSObject>
- (NSArray *)loadedDetectors;
- (VNDetector *)detectorOfClass:(Class)arg1 configuredWithOptions:(NSDictionary *)arg2 error:(id *)arg3;
- (VNDetector *)detectorOfType:(NSString *)arg1 configuredWithOptions:(NSDictionary *)arg2 error:(id *)arg3;
@end


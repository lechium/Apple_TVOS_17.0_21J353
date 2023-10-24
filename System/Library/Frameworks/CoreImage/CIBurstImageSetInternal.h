//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIBurstActionClassifier, CIBurstImageFaceAnalysisContext, CIBurstYUVImage, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CIBurstImageSetInternal : NSObject
{
    NSObject<OS_dispatch_queue> *dq;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *dq_yuvdump;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *sem;	// 24 = 0x18
    NSMutableArray *clusterArray;	// 32 = 0x20
    int temporalOrder;	// 40 = 0x28
    int maxNumPendingFrames;	// 44 = 0x2c
    _Bool enableAnalysis;	// 48 = 0x30
    int dummyAnalysisCount;	// 52 = 0x34
    _Bool enableFaceCore;	// 56 = 0x38
    _Bool enableDumpYUV;	// 57 = 0x39
    NSString *burstCoverSelection;	// 64 = 0x40
    _Bool isAction;	// 72 = 0x48
    _Bool isPortrait;	// 73 = 0x49
    CIBurstImageFaceAnalysisContext *faceAnalysisContext;	// 80 = 0x50
    CIBurstYUVImage *overrideImage;	// 88 = 0x58
    NSDictionary *overrideProps;	// 96 = 0x60
    NSMutableArray *allImageIdentifiers;	// 104 = 0x68
    NSCountedSet *faceIDCounts;	// 112 = 0x70
    NSMutableDictionary *statsByImageIdentifier;	// 120 = 0x78
    NSMutableDictionary *clusterByImageIdentifier;	// 128 = 0x80
    NSString *burstLogFileName;	// 136 = 0x88
    struct __sFILE *burstLogFileHandle;	// 144 = 0x90
    CIBurstActionClassifier *actionClassifier;	// 152 = 0x98
    int curClusterIndexToProcess;	// 160 = 0xa0
    NSMutableArray *bestImageIdentifiersArray;	// 168 = 0xa8
    int _version;	// 176 = 0xb0
    NSString *burstId;	// 184 = 0xb8
    NSString *_versionString;	// 192 = 0xc0
}

+ (id)defaultVersionString;	// IMP=0x006000000002ac1d
@property int version; // @synthesize version=_version;
@property NSString *versionString; // @synthesize versionString=_versionString;
@property NSArray *bestImageIdentifiersArray; // @synthesize bestImageIdentifiersArray;
@property(retain, nonatomic) NSString *burstId; // @synthesize burstId;
@property NSString *burstCoverSelection; // @synthesize burstCoverSelection;
@property _Bool enableDumpYUV; // @synthesize enableDumpYUV;
@property _Bool enableFaceCore; // @synthesize enableFaceCore;
@property int dummyAnalysisCount; // @synthesize dummyAnalysisCount;
@property _Bool enableAnalysis; // @synthesize enableAnalysis;
@property int maxNumPendingFrames; // @synthesize maxNumPendingFrames;
@property NSString *burstLogFileName; // @synthesize burstLogFileName;
@property NSMutableDictionary *clusterByImageIdentifier; // @synthesize clusterByImageIdentifier;
@property NSMutableDictionary *statsByImageIdentifier; // @synthesize statsByImageIdentifier;
@property CIBurstActionClassifier *actionClassifier; // @synthesize actionClassifier;
@property NSMutableArray *allImageIdentifiers; // @synthesize allImageIdentifiers;
@property NSCountedSet *faceIDCounts; // @synthesize faceIDCounts;
@property int temporalOrder; // @synthesize temporalOrder;
@property NSMutableArray *clusterArray; // @synthesize clusterArray;
- (_Bool)isAction;	// IMP=0x0000000000035eff
- (_Bool)isPortrait;	// IMP=0x0000000000035eca
- (_Bool)isFaceDetectionForced;	// IMP=0x0000000000035eab
- (id)imageClusterForIdentifier:(id)arg1;	// IMP=0x0000000000035abd
- (id)bestImageIdentifiers;	// IMP=0x0000000000031b0b
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;	// IMP=0x0000000000031608
- (id)findBestImage:(id)arg1 useActionScores:(_Bool)arg2;	// IMP=0x0000000000030dd8
- (void)computeAllImageScores;	// IMP=0x000000000002f616
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;	// IMP=0x000000000002f2a7
- (float)computeCameraTravelDistance;	// IMP=0x000000000002edb3
- (void)performEmotionalRejectionOnCluster:(id)arg1;	// IMP=0x000000000002e718
- (int)computeEmotion:(id)arg1;	// IMP=0x000000000002e5b8
- (void)addImageFromIOSurface:(struct __IOSurface *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e445
- (void)addYUVImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000002df50
- (void)processClusters:(_Bool)arg1;	// IMP=0x000000000002ba30
- (float)computeActionSelectionThreshold;	// IMP=0x000000000002b661
- (void)dealloc;	// IMP=0x000000000002b400
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000002ad30
- (id)burstDocumentDirectory;	// IMP=0x000000000002ac9c

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, _TtC17SketchControllers26MSVectorComponentSpecifier;

@interface _TtC6Sketch21MSVectorOverlayAction : NSObject
{
    // Error parsing type: , name: state
}

+ (id)dragSegmentAtIndexPath:(id)arg1 offset:(double)arg2 toPoint:(struct CGPoint)arg3;
+ (id)dragHandle:(long long)arg1 atIndexPath:(id)arg2;
+ (id)selectWithLocation:(struct CGPoint)arg1;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) double offset;
@property(nonatomic, readonly) struct CGPoint location;
@property(nonatomic, readonly) long long component;
@property(nonatomic, readonly) NSIndexPath *segmentIndexPath;
@property(nonatomic, readonly) _TtC17SketchControllers26MSVectorComponentSpecifier *componentSpecifier;
@property(nonatomic, readonly) NSIndexPath *indexPath;
@property(nonatomic, readonly) long long tool;
- (id)actionWithOffset:(double)arg1;
- (id)initWithTool:(long long)arg1 indexPath:(id)arg2 component:(long long)arg3 location:(struct CGPoint)arg4;

@end


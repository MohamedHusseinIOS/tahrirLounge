//
//  DataForCells.h
//  session 7 task
//
//  Created by MOMO on 6/9/17.
//  Copyright © 2017 GreenRoot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataForCells : UIViewController <NSURLSessionDelegate>{
    NSMutableArray *arrayOfCellObjects;

}



@property (retain, atomic)NSArray *ServiceArray;

@property (retain)NSMutableArray *DataArray;


-(NSMutableArray*)getCellItems: (NSIndexPath *)index :(NSArray *)array;

-(NSMutableArray*)getDataFromApi;

@end